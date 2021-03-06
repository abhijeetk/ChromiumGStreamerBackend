// Copyright (c) 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/navigation_interception/navigation_params.h"

namespace navigation_interception {

NavigationParams::NavigationParams(const NavigationParams& other) {
  Assign(other);
}

NavigationParams::NavigationParams(const GURL& url,
                                   const content::Referrer& referrer,
                                   bool has_user_gesture,
                                   bool is_post,
                                   ui::PageTransition transition_type,
                                   bool is_redirect,
                                   bool is_external_protocol,
                                   bool is_main_frame)
    : url_(url),
      referrer_(referrer),
      has_user_gesture_(has_user_gesture),
      is_post_(is_post),
      transition_type_(transition_type),
      is_redirect_(is_redirect),
      is_external_protocol_(is_external_protocol),
      is_main_frame_(is_main_frame) {
}

void NavigationParams::operator=(const NavigationParams& rhs) {
  Assign(rhs);
}

void NavigationParams::Assign(const NavigationParams& other) {
  url_ = other.url();
  referrer_ = other.referrer();
  has_user_gesture_ = other.has_user_gesture();
  is_post_ = other.is_post();
  transition_type_ = other.transition_type();
  is_redirect_ = other.is_redirect();
  is_external_protocol_ = other.is_external_protocol();
  is_main_frame_ = other.is_main_frame();
}

}  // namespace navigation_interception

