{
  inputs.flake-utils.url = "github:numtide/flake-utils";

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem
      (system:
        let
          pkgs = nixpkgs.legacyPackages.${system};
        in
        {
          devShell = pkgs.mkShell {
            buildInputs = with pkgs; [
              # needed to build the grammar with 'tree-sitter generate'
              nodejs
              # compiles parser.c and other relavent c code in the grammar
              clang
              # for formatting grammar.js
              nodePackages.prettier
            ];
          };
        }
      );
}
