//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
- (id)keyString;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionID:(id)arg1 publisherMatchID:(id)arg2;

@end

