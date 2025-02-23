// Copyright 2019-present the Material Components for iOS authors. All Rights Reserved.
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

API_DEPRECATED_BEGIN("Use a branded UITextField (go/material-ios-text-fields) or branded "
                     "UITextView (go/material-ios-text-views) instead",
                     ios(12, 12))

/**
 This enum represents different positional states the label can be in.
 */
typedef NS_ENUM(NSUInteger, MDCTextControlLabelPosition) {
  /**
   The state where the label is not visible.
   */
  MDCTextControlLabelPositionNone,
  /**
   The state where the label is positioned (i.e. floating) above the text rect.
   */
  MDCTextControlLabelPositionFloating,
  /**
   The state where the label is positioned in the normal text area.
   */
  MDCTextControlLabelPositionNormal,
};

MDCTextControlLabelPosition MDCTextControlLabelPositionWith(BOOL hasLabelText, BOOL hasText,
                                                            BOOL canLabelFloat, BOOL isEditing);

CGSize MDCTextControlLabelSizeWith(NSString *text, CGFloat maxWidth, UIFont *font);

API_DEPRECATED_END
