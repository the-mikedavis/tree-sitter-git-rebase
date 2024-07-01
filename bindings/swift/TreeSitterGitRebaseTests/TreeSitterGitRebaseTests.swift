import XCTest
import SwiftTreeSitter
import TreeSitterGitRebase

final class TreeSitterGitRebaseTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_git_rebase())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading GitRebase grammar")
    }
}
