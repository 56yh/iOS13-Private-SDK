//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DESRecordStore;

__attribute__((visibility("hidden")))
@interface NLFIAPluginDelegate : NSObject
{
    DESRecordStore *_recordStore;
}

- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)processSearchableItem:(id)arg1;
- (id)languageForText:(id)arg1;
- (_Bool)isSentMessage:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end

