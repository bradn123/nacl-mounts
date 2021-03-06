/*
 * Copyright (c) 2011 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that be
 * found in the LICENSE file.
 */


#ifndef PACKAGES_SCRIPTS_FILESYS_TESTS_MEMORY_TESTHELPCOMMON_H_
#define PACKAGES_SCRIPTS_FILESYS_TESTS_MEMORY_TESTHELPCOMMON_H_

MemNode *CreateNode(std::string name, MemNode *parent,
                    MemMount *mount, bool is_dir = false) {
  MemNode *node = new MemNode();
  node->set_name(name);
  node->set_parent(parent);
  node->set_mount(mount);
  node->set_is_dir(is_dir);
  return node;
}

MemFileHandle *CreateMemFileHandle(MemMount *mount, MemNode *node,
                                   int used, int offset, int flags) {
  MemFileHandle *mfh = new MemFileHandle();
  mfh->set_mount(mount);
  mfh->set_node(node);
  mfh->set_used(used);
  mfh->set_offset(offset);
  mfh->set_flags(flags);
  return mfh;
}

#endif  // PACKAGES_SCRIPTS_FILESYS_TESTS_MEMORY_TESTHELPCOMMON_H_
