//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSBundle (SCROBundleExtras)
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;
+ (_Bool)doesBrailleTableSupportEightDot:(id)arg1;
+ (_Bool)doesBrailleTableSupportContractions:(id)arg1;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (id)_brailleTableBundles;
+ (id)brailleDriverDeviceDetectionInfo;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)brailleDriverBundles;
- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;
@end

