//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADSourceInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (int)_tryPerformBlockWithSourceID:(id)arg1 forAction:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (int)_tryPerformBlockWithSourceID:(id)arg1 forAction:(unsigned long long)arg2 entityType:(int)arg3 withBlock:(id /* block */)arg4;
- (void)CADSourceGetManagedConfigurationAccountAccess:(id)arg1 reply:(id /* block */)arg2;
- (void)CADSourceUpdateGrantedDelegatePermission:(id)arg1 sourceID:(id)arg2 reply:(id /* block */)arg3;
- (void)CADSourceGetGrantedDelegatesList:(id)arg1 reply:(id /* block */)arg2;
- (void)CADRemoveCalendarItemsOlderThanDate:(id)arg1 ofType:(int)arg2 inSource:(id)arg3 reply:(id /* block */)arg4;
- (void)CADCountCalendarItemsOfType:(int)arg1 inSource:(id)arg2 reply:(id /* block */)arg3;
- (void)CADSourceRefresh:(id)arg1 isUserRequested:(_Bool)arg2 reply:(id /* block */)arg3;
- (void)CADSourceGetNotificationCollection:(id)arg1 reply:(id /* block */)arg2;
- (void)CADSourceGetConstraints:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseGetLocalBirthdaySource:(id /* block */)arg1;
- (void)CADDatabaseGetLocalSource:(id /* block */)arg1;
- (void)CADDatabaseGetSourcesWithFaultedProperties:(id)arg1 reply:(id /* block */)arg2;

@end

