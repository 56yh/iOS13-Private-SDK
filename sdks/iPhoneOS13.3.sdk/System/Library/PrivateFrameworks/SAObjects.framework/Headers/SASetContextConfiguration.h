//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SASetContextConfiguration : SABaseClientBoundCommand
{
}

+ (id)setContextConfigurationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setContextConfiguration;
- (BOOL)requiresResponse;
@property(nonatomic) long long contextTimeoutSeconds;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

