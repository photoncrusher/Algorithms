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
///
//===----------------------------------------------------------------------===//

void doInsertionSort(int $array[], int N){
    int* arrayptr = $array;
    for (int i = 1; i < N; i++)
    {
        int key = arrayptr[i];

        // do insertion sort for each subsequence array
        int j = i - 1;
        while (j > -1 and arrayptr[j] > key)
        {
            // find all in subsequence which geq key
            arrayptr[j+1] = arrayptr[j];
            j = j - 1;
        }
        arrayptr[j+1] = key; 
    }
}

int getInsertionSortResult(int array[], int N){
    // TO-DO: implement function to get Insertion sort result instead of direct change on sequencedd
    return 1;
}
