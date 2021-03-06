//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface BLTBBBulletinKey : NSObject <NSCopying>
{
    NSString *_sectionID;
    NSString *_publisherMatchID;
}

+ (id)bulletinKeyWithSectionID:(id)arg1 publisherMatchID:(id)arg2;
@property(readonly, copy, nonatomic) NSString *publisherMatchID; // @synthesize publisherMatchID=_publisherMatchID;
@property(readonly, copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
// - (void).cxx_destruct;
- (id)keyString;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSectionID:(id)arg1 publisherMatchID:(id)arg2;

@end

