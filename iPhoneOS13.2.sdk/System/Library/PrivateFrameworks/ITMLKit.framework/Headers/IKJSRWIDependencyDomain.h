//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IKJSRWIDependencyDomain : NSObject
{
    NSString *_identifier;
    Class _agentClass;
    NSDictionary *_types;
    NSDictionary *_commands;
    NSDictionary *_events;
}

+ (void)processDomains:(id)arg1;
+ (id)allDomains;
+ (id)domainAgentClassMap;
+ (id)allowedDomains;
@property(readonly, nonatomic) NSDictionary *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSDictionary *commands; // @synthesize commands=_commands;
@property(readonly, nonatomic) NSDictionary *types; // @synthesize types=_types;
@property(retain, nonatomic) Class agentClass; // @synthesize agentClass=_agentClass;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isValidForEventsWithError:(id *)arg1;
- (_Bool)isValidForTypesWithError:(id *)arg1;
- (_Bool)isValidForAgentWithError:(id *)arg1;
- (_Bool)isValidWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *dispatcherClassString;
- (id)initWithDomainDictionary:(id)arg1 agentClass:(Class)arg2;

@end

