//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@interface SGURLDissector : SGPipelineDissector
{
}

- (id)_titleFromMessagesSynthesizedTextContent:(id)arg1;
- (id)urlsFromAttributes:(id)arg1 handle:(id)arg2 bundleIdentifier:(id)arg3 domainIdentifier:(id)arg4 uniqueIdentifier:(id)arg5 documentTitle:(id)arg6 documentDate:(id)arg7 documentTimeInterval:(double)arg8 receivedAt:(id)arg9 isOutgoingDocument:(_Bool)arg10;
- (id)urlsFromText:(id)arg1 handle:(id)arg2 dataDetectorMatches:(id)arg3 bundleIdentifier:(id)arg4 domainIdentifier:(id)arg5 uniqueIdentifier:(id)arg6 documentTitle:(id)arg7 documentDate:(id)arg8 documentTimeInterval:(double)arg9 receivedAt:(id)arg10 isOutgoingDocument:(_Bool)arg11;
- (id)urlsFromURLs:(id)arg1 handle:(id)arg2 bundleIdentifier:(id)arg3 domainIdentifier:(id)arg4 uniqueIdentifier:(id)arg5 documentTitle:(id)arg6 documentDate:(id)arg7 documentTimeInterval:(double)arg8 receivedAt:(id)arg9 isOutgoingDocument:(_Bool)arg10;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)supportedBundleIdentifiers;

@end

