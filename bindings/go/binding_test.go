package tree_sitter_git_rebase_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-git_rebase"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_git_rebase.Language())
	if language == nil {
		t.Errorf("Error loading GitRebase grammar")
	}
}
