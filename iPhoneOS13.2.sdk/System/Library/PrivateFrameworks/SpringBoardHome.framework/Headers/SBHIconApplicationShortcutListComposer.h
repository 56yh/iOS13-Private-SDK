//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBHIconApplicationShortcutListComposer : NSObject
{
}

+ (id)composedShortcutsForFolderIcon:(id)arg1 iconImageCache:(id)arg2 iconManagerAllowsEditing:(_Bool)arg3 badgeViewGenerator:(id /* block */)arg4;
+ (id)composedShortcutsForDownloadingApplicationWithBundleIdentifier:(id)arg1 iconDisplayName:(id)arg2 prioritizationIsAvailable:(_Bool)arg3 downloadingInformationAgent:(id)arg4 canShare:(_Bool)arg5;
+ (id)composedShortcutsForBookmarkWithDisplayName:(id)arg1 removeStyle:(long long)arg2;
+ (id)composedShortcutsForApplicationWithBundleIdentifier:(id)arg1 iconDisplayName:(id)arg2 staticItems:(id)arg3 dynamicItems:(id)arg4 applicationItemID:(unsigned long long)arg5 numberOfDisplayItemsInSwitcher:(long long)arg6 supportsMultipleWindows:(_Bool)arg7 isSystemApplication:(_Bool)arg8 isInternalApplication:(_Bool)arg9 isApplicationInBeta:(_Bool)arg10 removeStyle:(long long)arg11;
+ (_Bool)supportsMultiwindowShortcut;
+ (id)filteredApplicationShortcutItemsWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2;

@end

