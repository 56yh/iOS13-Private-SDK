//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSManagedObject, NSManagedObjectContext, NSManagedObjectID, NSPropertyDescription;

@protocol NSManagedObjectContextFaultingDelegate 

@optional
- (long long)context:(NSManagedObjectContext *)arg1 shouldHandleInaccessibleFault:(NSManagedObject *)arg2 forObjectID:(NSManagedObjectID *)arg3 andTrigger:(NSPropertyDescription *)arg4;
@end

