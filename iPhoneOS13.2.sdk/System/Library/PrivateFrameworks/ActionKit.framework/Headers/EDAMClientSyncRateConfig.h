//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMClientSyncRateConfig : FATObject
{
    NSNumber *_syncStateIntervalMillis;
    NSNumber *_updateNoteWhenIdleForMillis;
    NSNumber *_updateNoteDuringEditIntervalMillis;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *updateNoteDuringEditIntervalMillis; // @synthesize updateNoteDuringEditIntervalMillis=_updateNoteDuringEditIntervalMillis;
@property(retain, nonatomic) NSNumber *updateNoteWhenIdleForMillis; // @synthesize updateNoteWhenIdleForMillis=_updateNoteWhenIdleForMillis;
@property(retain, nonatomic) NSNumber *syncStateIntervalMillis; // @synthesize syncStateIntervalMillis=_syncStateIntervalMillis;

@end

