//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData, NSDictionary, NSString;

@protocol AFManagedStore 
- (void)resetKnowledgeStoreWithName:(NSString *)arg1;
- (void)setData:(NSData *)arg1 forKey:(NSString *)arg2 inKnowledgeStoreWithName:(NSString *)arg3;
- (NSData *)dataForKey:(NSString *)arg1 inKnowledgeStoreWithName:(NSString *)arg2;
- (void)setDomainObject:(NSDictionary *)arg1 forKey:(NSString *)arg2;
- (NSDictionary *)domainObjectForKey:(NSString *)arg1;
@end

