//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSUUID;

@interface MNGuidanceJunctionViewInfo : NSObject <NSSecureCoding>
{
    NSUUID *_uniqueID;
    NSArray *_images;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithID:(id)arg1 images:(id)arg2;

@end

