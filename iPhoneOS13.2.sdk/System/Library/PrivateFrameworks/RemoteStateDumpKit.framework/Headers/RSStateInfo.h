//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RSStateInfo : NSObject
{
    unsigned long long _stateType;
    long long _actionRevision;
}

@property(nonatomic) long long actionRevision; // @synthesize actionRevision=_actionRevision;
@property(nonatomic) unsigned long long stateType; // @synthesize stateType=_stateType;
- (id)initWithType:(unsigned long long)arg1 revision:(long long)arg2;

@end

