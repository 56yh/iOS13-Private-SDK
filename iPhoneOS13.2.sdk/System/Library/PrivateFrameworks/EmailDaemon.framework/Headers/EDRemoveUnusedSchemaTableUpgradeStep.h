//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDTableUpgradeStep-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSString;

@interface EDRemoveUnusedSchemaTableUpgradeStep : NSObject <EFLoggable, EDTableUpgradeStep>
{
}

+ (int)runWithConnection:(id)arg1;
+ (int)_dropThreadCategoriesIndex:(id)arg1;
+ (int)_truncateTable:(id)arg1 connection:(id)arg2;
+ (int)_dropTable:(id)arg1 connection:(id)arg2;
+ (int)_recreateThreadsIndices:(id)arg1;
+ (int)_recreateThreadsTable:(id)arg1;
+ (int)_swapMessagesTables:(id)arg1;
+ (int)_copyMessagesData:(id)arg1;
+ (int)_recreateMessagesIndices:(id)arg1;
+ (int)_createTempMessagesTable:(id)arg1;
+ (id)log;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

