//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface NEPublisherLogoProcessorRequest : NSObject
{
    // Error parsing type: , name: assetHandles
    // Error parsing type: , name: publisherLogoImageSize
    // Error parsing type: , name: scale
    // Error parsing type: , name: theme
}

- (id)init;
@property(nonatomic, readonly) NSString *cacheIdentifier;
- (id)initWithPublisherLogoAssetHandle:(id)arg1 publisherLogoImageSize:(struct CGSize)arg2 scale:(double)arg3 theme:(long long)arg4;
@property(nonatomic, copy) NSDictionary *assetHandles;

@end

