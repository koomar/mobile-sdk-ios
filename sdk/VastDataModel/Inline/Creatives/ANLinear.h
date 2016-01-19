/* Copyright 2015 APPNEXUS INC
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 
 See the License for the specific language governing permissions and
 limitations under the License.
 
 */


#import <Foundation/Foundation.h>
#import "ANTracking.h"
#import "ANVideoClicks.h"
#import "ANMediaFile.h"
#import "ANVastDataModelInterface.h"

@interface ANLinear : ANVastDataModelInterface

@property (nonatomic, strong) NSString *duration;
@property (nonatomic, strong) NSMutableArray *trackingEvents;
@property (nonatomic, strong) NSString *adParameters;

@property (nonatomic, strong) ANVideoClicks *anVideoClicks;

@property (nonatomic, strong) NSMutableArray *mediaFiles;

@property (nonatomic, strong) NSString *skipOffSet;

- (instancetype)initWithXMLElement:(ANXMLElement *)element;

@end
