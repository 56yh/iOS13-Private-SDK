//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface _PXPlacesSnapshotKey : NSObject <NSCopying>
{
    long long __userInterfaceStyle;
    struct CGSize __imageSize;
}

@property(readonly, nonatomic) long long _userInterfaceStyle; // @synthesize _userInterfaceStyle=__userInterfaceStyle;
@property(readonly, nonatomic) struct CGSize _imageSize; // @synthesize _imageSize=__imageSize;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageSize:(struct CGSize)arg1 userInterfaceStyle:(long long)arg2;

@end

