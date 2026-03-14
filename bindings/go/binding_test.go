package tree_sitter_git_rebase_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_git_rebase "github.com/the-mikedavis/tree-sitter-git-rebase/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_git_rebase.Language())
	if language == nil {
		t.Errorf("Error loading GitRebase grammar")
	}
}
