// Copyright 2018-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <UIKit/UIKit.h>

#import "MDCTextField.h"

API_DEPRECATED_BEGIN("Use UITextField and UITextView within grouped list cells."
                     "See go/material-ios-text-fields for more details.",
                     ios(12, 12))

/**
  Exposes parts of MDCTextField for testing.
 */
@interface MDCTextField (Testing)

/**
  Synthesizes a touch on the clear button of the text field.
 */
- (void)clearButtonDidTouch;

@end

API_DEPRECATED_END
