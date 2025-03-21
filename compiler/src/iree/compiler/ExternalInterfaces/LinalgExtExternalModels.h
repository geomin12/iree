// Copyright 2024 The IREE Authors
//
// Licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#ifndef IREE_COMPILER_EXTERNALINTERFACES_LINALGEXTEXTERNALMODELS_H_
#define IREE_COMPILER_EXTERNALINTERFACES_LINALGEXTEXTERNALMODELS_H_

namespace mlir {
class DialectRegistry;
} // namespace mlir

namespace mlir::iree_compiler {

void registerLinalgExtExternalModels(DialectRegistry &registry);

} // namespace mlir::iree_compiler

#endif // IREE_COMPILER_EXTERNALINTERFACES_LINALGEXTEXTERNALMODELS_H_
