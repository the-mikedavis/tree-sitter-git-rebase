// swift-tools-version:5.6

import Foundation
import PackageDescription

let dir = Context.packageDirectory
var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "\(dir)/src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterGitRebase",
    products: [
        .library(name: "TreeSitterGitRebase", targets: ["TreeSitterGitRebase"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.9.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGitRebase",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGitRebaseTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGitRebase",
            ],
            path: "bindings/swift/TreeSitterGitRebaseTests"
        )
    ],
    cLanguageStandard: .c11
)
