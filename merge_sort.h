//===-- subfolder/Filename.h - Very brief description -----------*- C++ -*-===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2022 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains stuff that I am describing here in the header and will
/// be sure to keep up to date.
/// Devide and Conquer - Merge sort
//===----------------------------------------------------------------------===//

void doMerge(int A[], int p, int q, int r){

    /// Function to merge 2 array

    int n1_left = q - p + 1;
    int n2_right = r - q;

    /// Create left and right array to copy

    int L[n1_left + 1];
    int R[n2_right + 1];
    
    /// Copy from old array to new left and right array

    for (int i = p; i < q + 1; i++)
    {
        L[i - p] = A[i];
    }
    for (int i = q; i < r; i++)
    {
        R[i - q] = A[i];
    }

    /// FULLFILL if L and R have different len

    L[n1_left] = 9999;
    R[n2_right] = 9999;

    /// Merge 2 array L and R

    int i_L = 0;
    int i_R = 0;

    for (int i = p; i < r; i++)
    {
        if (L[i_L] < R[i_R])
        {
            A[i] = L[i_L];
            i_L += 1;
        }
        else{
            A[i] = R[i_R];
            i_R += 1;
        }
    }    
}

void doMergeSort(int A[], int p, int r){
    if (p < r)
    {
        int q = (r + p) / 2;
        doMergeSort(A, p, q);
        doMergeSort(A, q+1, r);
        doMerge(A, p, q, r);
    }
    else return;
}