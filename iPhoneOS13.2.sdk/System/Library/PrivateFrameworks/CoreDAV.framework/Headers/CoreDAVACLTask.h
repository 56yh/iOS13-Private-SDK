//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask
{
    NSArray *_accessControlEntities;
}

@property(retain, nonatomic) NSArray *accessControlEntities; // @synthesize accessControlEntities=_accessControlEntities;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (id)description;
- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <CoreDAVACLTaskDelegate> delegate; // @dynamic delegate;

@end

