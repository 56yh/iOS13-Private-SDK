//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NFContext, NFKey, NSString, Protocol;
@protocol NFResolver;

@protocol NFResolver 
- (id)unsafeResolveForKey:(NSString *)arg1 name:(NSString *)arg2 context:(NFContext *)arg3;
- (id)unsafeResolveForKey:(NSString *)arg1 name:(NSString *)arg2;
- (id)resolveForKey:(NFKey *)arg1 context:(NFContext *)arg2;
- (id)resolveForKey:(NFKey *)arg1;
- (id)resolveProtocol:(Protocol *)arg1 name:(NSString *)arg2 contextBlock:(void (^)(id <NFContext>))arg3;
- (id)resolveProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (id)resolveProtocol:(Protocol *)arg1 contextBlock:(void (^)(id <NFContext>))arg2;
- (id)resolveProtocol:(Protocol *)arg1;
- (id)resolveClass:(Class)arg1 name:(NSString *)arg2 contextBlock:(void (^)(id <NFContext>))arg3;
- (id)resolveClass:(Class)arg1 name:(NSString *)arg2;
- (id)resolveClass:(Class)arg1 contextBlock:(void (^)(id <NFContext>))arg2;
- (id)resolveClass:(Class)arg1;
- (void)linkResolverWithLinkBlock:(void (^)(void (^)(void)))arg1;
- (id <NFResolver>)currentObjectGraphResolver:(unsigned long long)arg1;
@end

