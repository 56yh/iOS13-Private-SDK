//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class BRContainer, NSArray;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerAllContainersModel : _UIDocumentPickerURLContainerModel
{
    NSArray *_scopes;
    BRContainer *_sourceContainer;
}

// - (void).cxx_destruct;
- (id)scopes;
- (void)startMonitoringChanges;
- (void)updateScopes;
- (struct _UIArrayController )_createObserver;
- (id)displayTitle;
- (BOOL)shouldShowTopLevelContainers;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(NSUInteger)arg3;
- (id)initWithFoldersForPickableTypes:(id)arg1 mode:(NSUInteger)arg2 sourceContainer:(id)arg3;

@end

