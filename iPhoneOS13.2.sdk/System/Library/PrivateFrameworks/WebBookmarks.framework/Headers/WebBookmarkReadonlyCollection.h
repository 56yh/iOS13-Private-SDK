//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebBookmarks/WBBookmarkProvider-Protocol.h>

@class NSString, WebBookmarkCollection;

@interface WebBookmarkReadonlyCollection : NSObject <WBBookmarkProvider>
{
    WebBookmarkCollection *_collection;
}

- (id)databaseHealthInformation;
- (id)bookmarkWithID:(int)arg1;
- (id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(_Bool)arg3;
- (id)readingListWithUnreadOnly:(_Bool)arg1 filteredUsingString:(id)arg2;
- (id)bookmarksMatchingString:(id)arg1;
- (void)enumerateBookmarks:(_Bool)arg1 andReadingListItems:(_Bool)arg2 matchingString:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)initReadonlySafariBookmarkCollection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

