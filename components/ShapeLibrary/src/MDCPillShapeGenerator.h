// Copyright 2017-present the Material Components for iOS authors. All Rights Reserved.
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

#import <Foundation/Foundation.h>

#import "MaterialShapes.h"

API_DEPRECATED_BEGIN("Use cornerRadius instead.", ios(12, 12))

/**
 A pill shape generator. Rounds the corners such that the shorter sides of the generated shape are
 entirely rounded.
 */
@interface MDCPillShapeGenerator : NSObject <MDCShapeGenerating>
@end

API_DEPRECATED_END
