//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASyncGetCachedSyncAnchors : SABaseClientBoundCommand
{
}

+ (id)getCachedSyncAnchorsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getCachedSyncAnchors;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *interactionId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

