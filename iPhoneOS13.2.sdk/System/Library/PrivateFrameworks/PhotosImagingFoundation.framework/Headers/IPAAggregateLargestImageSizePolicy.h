//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@class NSArray;

@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy
{
    NSArray *_policies;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (_Bool)isBestFitPolicy;
- (id)initWithPolicies:(id)arg1;

@end

