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
  MDCTextControl text areas and input chip views retain one of these from initialization to
  deallocation. Instances of this class hold on to the gradient layers used by text areas and input
  chip views and they create mask layers from those gradients. This class was created in an attempt
  to reduce duplicate code between these two text controls.
 */
@interface MDCTextControlGradientManager : NSObject

@property(strong, nonatomic) CAGradientLayer *horizontalGradient;
@property(strong, nonatomic) CAGradientLayer *verticalGradient;

- (CALayer *)combinedGradientMaskLayer;

@end

API_DEPRECATED_END
