---
id: Branching_Merging
aliases: []
tags: []
---

# Branching / Merging

## What is Branching?

- Definition:
  - A branch is a separate line of development that allows you to work on
features or fixes without affecting the main codebase

- Purpose:
  - Facilitates parallel development and isolation of changes

## Why Use Branching?

- Isolation:
  - Develop features or fixes in isolation from the main code

- Collaboration:
  - Multiple team members can work on different features simultaneously

- Experimentation:
  - Test new ideas without affecting the stable codebase

## Branching Commands

- `git branch`

- `git branch "branch_name"`

- `git checkout "branch_name"`

- `git merge "branch_name"`

## Creating a New Branch

- Write new branch:
  - `git branch "branch_name"`

- To switch branch:
  - `git checkout "branch_name"`

## Switching Branches

- Switch:
  - `git checkout "branch_name"`

- Changes are preserved when switching between branches

## Branching Best Practices

- Create feature branches for new features or bug fixes

- Regularly merge changes from main branch to your current branch to keep
up to date

- Delete feature branches after merging to keep the repository clean
  - This is something I need to keep up with, since it can get messy
  and confusing which branches are currently being used

## What is Merging (in Git)

- Definition:
  - Merging in Git combines changes from different branches into a single
  branch

- Importance:
  - Essential for collaborative development and managing multiple features

## Merging Branches

- Switch to target branch:
  - `git checkout target_branch_name`

- Merge changes from the feature branch:
  - `git merge feature-branch`

- Resolve any merge conflicts, if any arise

> [!NOTE]
> Merging branches will usually be between a feature branch onto main

## Merging Branch Conflicts

- Question:
  - When do conflicts occur?

- Answer:
  - Conflicts occur when changes in different branches cannot be
automatically merged

- Manually resolve conflicts in the conflicted files

- Use `git add` to mark conflicts as resolved

- Complete the merge with `git merge --continue`

- OR, use `git merge main -x our`

## Merging Branch Conflicts (Automatically)

- Use:
  - `git merge feature-branch -x ours`
- ... to automatically take changes from the current repository that may
conflict with merging repository
- `ours` is the branch we are currently working on

- Use:
  - `git merge feature-branch -x theirs`
- ... to automatically take changes from the current repository that may
conflict with the merging repository
- `theirs` is the remote branch/ repository

## Different Types of Merges

- Fast-Forward Merges

- Recursive Merges

- Octopus Merges

- Three-Way Merges

## Fast-Forward Merge

- Definition:
  - A simple merge where the target branch pointer is moved to the tip of the
  merging branch

- Conditions:
  - The merging branch is a *direct descendant* of the target branch

- No new commit is created

## Recursive Merge

- Definition:
  - The default merge strategy in Git

- Occurs when branches have diverged

- Creates a new merge commit that has two parent commits

## Octopus Merge

- Definition:
  - A merge involving three or more branches simultaneously

- Rarely used, usually in complex scenarios

- Creates a new merge commit with multiple parent commits

## Three-Way Merge

- Definition:
  - A merge strategy that used three commits,
    - The two branch tips and their common ancestor

- Resolves conflicts by comparing changes between the common ancestor and the
branch tips

- Creates a new merge commit

## Merge Comparison

- Fast-Forward:
  - Simple, no new commit

- Recursive:
  - Default for diverged branches

- Octopus:
  - For merging multiple branches simultaneously

- Three-Way:
  - Resolves conflicts using common ancestor

## What is a Pull Request?

- Definition:
  - A pull request (PR) is a proposed set of changes submitted by a developer
  for review and integration into the main codebase

- Acts as a bridge between feature branches and the main branch

## Purpose of Pull Requests

- Facilitates collaboration and code review

- Enhances code quality through feedback

- Enables a structured and controlled process for merging changes

## Creating a Pull Request

- Developers create a pull request when they are ready to merge their changes

- Typically done from a feature branch to the main branch

## Components of a Pull Request

- Title and Description:
  - Provide a concise title and detailed description of changes

- Files changed:
  - Displays the modifications introduced in the pull request
