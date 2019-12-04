//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSString;

@interface MPUDataSource : NSObject <NSCoding>
{
    long long _invalidationIgnoreCount;
    long long _numberOfIgnoredInvalidations;
    long long _entityType;
}

+ (Class)invalidationContextClass;
@property(readonly, nonatomic) long long entityType; // @synthesize entityType=_entityType;
- (void)_willInvalidateWithContext:(id)arg1;
- (id)_indexPathForGlobalIndex:(unsigned long long)arg1;
- (unsigned long long)_globalIndexForIndexPath:(id)arg1;
- (void)_didInvalidateWithContext:(id)arg1;
@property(readonly, nonatomic) _Bool usesSections;
@property(readonly, nonatomic) _Bool showsIndexBar;
@property(readonly, nonatomic) _Bool showsEntityCountFooter;
- (id)sectionEntities;
- (unsigned long long)indexOfSectionEntity:(id)arg1;
- (id)sectionEntityAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1;
- (void)preloadSectionEntities;
- (void)preloadEntities;
- (id)playbackContextForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSections;
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
- (void)_invalidateCalculatedEntities;
- (void)invalidateWithContext:(id)arg1;
- (void)invalidate;
- (void)endIgnoringInvalidation;
- (void)beginIgnoringInvalidation;
- (_Bool)isIgnoringInvalidation;
@property(readonly, nonatomic) _Bool isEmpty;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfEntity:(id)arg1;
- (_Bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *entityCountFormat;
- (id)entityAtIndexPath:(id)arg1;
- (id)entityAtIndex:(unsigned long long)arg1;
- (id)entities;
- (long long)editingTypeForEntityAtIndexPath:(id)arg1;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (_Bool)canEditEntityAtIndex:(unsigned long long)arg1;
- (void)deleteEntityAtIndexPath:(id)arg1;
- (void)deleteEntityAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)canEditEntityAtIndexPath:(id)arg1;
- (_Bool)canSelectEntityAtIndex:(unsigned long long)arg1;
- (id)anyEntity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(long long)arg1;

@end

