//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarRecordChange-Protocol.h>

@class NSString;

@interface AVTCoreDataChangeTrackerChange : NSObject <AVTAvatarRecordChange>
{
    NSString *_recordIdentifier;
    long long _changeType;
}

+ (long long)trackerChangeTypeFromPersistentChangeType:(long long)arg1;
@property(readonly, nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSString *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithRecordIdentifier:(id)arg1 changeType:(long long)arg2;

@end

