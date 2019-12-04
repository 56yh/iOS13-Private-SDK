//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPersonalizationImageSet : PKPassImageSet
{
    PKImage *_logoImage;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)shouldCache;
+ (long long)imageSetType;
@property(retain, nonatomic) PKImage *logoImage; // @synthesize logoImage=_logoImage;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end

