//
//  ASConfigurationDelegate.h
//  Texture
//
//  Copyright (c) Pinterest, Inc.  All rights reserved.
//  Licensed under Apache 2.0: http://www.apache.org/licenses/LICENSE-2.0
//

#import <Foundation/Foundation.h>
#import <AsyncDisplayKit/ASConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Used to communicate configuration-related events to the client.
 */
@protocol ASConfigurationDelegate <NSObject>

/**
 * Texture performed its first behavior related to the feature(s).
 * This can be useful for tracking the impact of the behavior (A/B testing).
 */
- (void)textureDidActivateExperimentalFeatures:(ASExperimentalFeatures)features;

@end

NS_ASSUME_NONNULL_END
