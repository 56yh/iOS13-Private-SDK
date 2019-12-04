//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification
{
    _Bool _shouldReload;
    NSSet *_insertedEntries;
    NSSet *_updatedEntries;
    NSSet *_deletedEntries;
}

+ (id)notificationWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;
+ (id)notificationWithFullReload;
@property(copy, nonatomic) NSSet *deletedEntries; // @synthesize deletedEntries=_deletedEntries;
@property(copy, nonatomic) NSSet *updatedEntries; // @synthesize updatedEntries=_updatedEntries;
@property(copy, nonatomic) NSSet *insertedEntries; // @synthesize insertedEntries=_insertedEntries;
@property(nonatomic) _Bool shouldReload; // @synthesize shouldReload=_shouldReload;
- (id)userInfo;
- (id)object;
- (id)name;
- (id)_initWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;
- (id)_initWithFullReload;

@end

