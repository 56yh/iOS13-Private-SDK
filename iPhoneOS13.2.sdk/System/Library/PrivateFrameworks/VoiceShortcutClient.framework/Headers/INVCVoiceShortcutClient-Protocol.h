//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString;

@protocol INVCVoiceShortcutClient 
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2 inDomain:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)setShortcutSuggestions:(NSArray *)arg1 forAppWithBundleIdentifier:(NSString *)arg2;
- (void)getVoiceShortcutWithIdentifier:(NSString *)arg1 completion:(void (^)(VCVoiceShortcut *, NSError *))arg2;
- (void)getVoiceShortcutsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

