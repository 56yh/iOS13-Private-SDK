//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@interface SAPing : SABaseClientBoundCommand <SAServerBoundCommand>
{
}

+ (id)pingWithDictionary:(id)arg1 context:(id)arg2;
+ (id)ping;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

