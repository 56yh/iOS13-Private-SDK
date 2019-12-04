//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCPersistedState.h>

@class CKOperationGroup, CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState
{
    _Bool _needsContainerMetadataSyncDown;
    _Bool _needsSharedDBSyncDown;
    CKServerChangeToken *_serverChangeToken;
    NSDate *_lastSyncDate;
    CKOperationGroup *_ckGroup;
}

+ (_Bool)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) CKOperationGroup *ckGroup; // @synthesize ckGroup=_ckGroup;
@property(nonatomic) _Bool needsSharedDBSyncDown; // @synthesize needsSharedDBSyncDown=_needsSharedDBSyncDown;
@property(nonatomic) _Bool needsContainerMetadataSyncDown; // @synthesize needsContainerMetadataSyncDown=_needsContainerMetadataSyncDown;
@property(retain) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)description;

@end

