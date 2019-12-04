//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString;

@interface SACFAbstractClientCommand : SADomainCommand
{
}

+ (id)abstractClientCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)abstractClientCommand;
- (_Bool)requiresResponse;
@property(nonatomic) _Bool shouldRestartContext;
@property(nonatomic) _Bool shouldCacheScript;
@property(nonatomic) _Bool shouldCacheBytecode;
@property(copy, nonatomic) NSString *jsScript;
@property(copy, nonatomic) NSString *jsParameters;
@property(copy, nonatomic) NSArray *jsLibraries;
@property(copy, nonatomic) NSString *jsFileNameSuffix;
@property(copy, nonatomic) NSString *domain;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

