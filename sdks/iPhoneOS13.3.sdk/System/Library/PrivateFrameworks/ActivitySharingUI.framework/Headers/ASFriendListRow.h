//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASFriend, _HKFitnessFriendActivitySnapshot;

@interface ASFriendListRow : NSObject
{
    ASFriend *_friend;
    struct _HKFitnessFriendActivitySnapshot _snapshot;
}

@property(retain, nonatomic) _HKFitnessFriendActivitySnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) ASFriend *friend; // @synthesize friend=_friend;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;

@end

