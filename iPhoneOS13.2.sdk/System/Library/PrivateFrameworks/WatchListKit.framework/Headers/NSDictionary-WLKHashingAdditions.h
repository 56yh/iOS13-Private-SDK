//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (WLKHashingAdditions)
- (unsigned long long)wlk_deepHash;
- (id)wlk_caseInsensitiveValueForKey:(id)arg1;
- (id)_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)wlk_dataForKey:(id)arg1;
- (id)wlk_arrayForKey:(id)arg1;
- (id)wlk_dictionaryForKey:(id)arg1;
- (id)wlk_dateFromMillisecondsSince1970ForKey:(id)arg1;
- (id)wlk_dateForKey:(id)arg1;
- (_Bool)wlk_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)wlk_stringForKey:(id)arg1;
- (id)wlk_numberForKey:(id)arg1;
- (id)wlk_artworkVariantListingForKey:(id)arg1;
@end

