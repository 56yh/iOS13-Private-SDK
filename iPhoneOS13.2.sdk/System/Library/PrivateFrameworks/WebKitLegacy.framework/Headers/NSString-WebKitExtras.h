//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSString (WebKitExtras)
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)arg1;
- (id)_webkit_stringByTrimmingWhitespace;
- (id)_webkit_filenameByFixingIllegalCharacters;
- (_Bool)_webkit_hasCaseInsensitiveSuffix:(id)arg1;
- (_Bool)_webkit_hasCaseInsensitivePrefix:(id)arg1;
- (_Bool)_webkit_isCaseInsensitiveEqualToString:(id)arg1;
- (id)_web_stringByAbbreviatingWithTildeInPath;
- (id)_web_capitalizeRFC822HeaderFieldName;
- (id)_web_bestURLForUserTypedString;
- (id)_web_possibleURLsForUserTypedString;
- (id)_web_possibleURLPrefixesForUserTypedString;
- (id)_web_possibleURLsForForUserTypedString:(_Bool)arg1;
- (_Bool)_webkit_looksLikeAbsoluteURL;
- (struct _NSRange)_webkit_rangeOfURLScheme;
- (id)_webkit_encodeHostName;
- (id)_webkit_decodeHostName;
- (id)_web_encodeHostName;
- (id)_web_decodeHostName;
- (id)_webkit_scriptIfJavaScriptURL;
- (id)_webkit_stringByReplacingValidPercentEscapes;
- (_Bool)_webkit_isFileURL;
- (_Bool)_webkit_isJavaScriptURL;
- (_Bool)_web_isUserVisibleURL;
@end

