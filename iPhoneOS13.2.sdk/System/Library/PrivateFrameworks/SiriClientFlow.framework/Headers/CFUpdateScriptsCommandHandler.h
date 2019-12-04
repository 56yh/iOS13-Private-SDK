//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SACFClientFlowUpdateScriptsCommand.h>

#import <SiriClientFlow/AFServiceCommand-Protocol.h>
#import <SiriClientFlow/CFScriptDownloadDelegate-Protocol.h>

@class CFScriptDownloadManager, NSObject, NSString;
@protocol CFScripting, OS_dispatch_queue;

@interface CFUpdateScriptsCommandHandler : SACFClientFlowUpdateScriptsCommand <AFServiceCommand, CFScriptDownloadDelegate>
{
    _Bool _scriptUpdateSuccess;
    id <CFScripting> _clientScripter;
    NSString *_scriptsCachePath;
    unsigned long long _scriptsUpdateCount;
    NSObject<OS_dispatch_queue> *_updateScriptsQueue;
    CFScriptDownloadManager *_downloadManager;
    id /* block */ _updateScriptsCompletion;
}

@property(copy) id /* block */ updateScriptsCompletion; // @synthesize updateScriptsCompletion=_updateScriptsCompletion;
@property(retain) CFScriptDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain) NSObject<OS_dispatch_queue> *updateScriptsQueue; // @synthesize updateScriptsQueue=_updateScriptsQueue;
@property _Bool scriptUpdateSuccess; // @synthesize scriptUpdateSuccess=_scriptUpdateSuccess;
@property unsigned long long scriptsUpdateCount; // @synthesize scriptsUpdateCount=_scriptsUpdateCount;
@property(retain) NSString *scriptsCachePath; // @synthesize scriptsCachePath=_scriptsCachePath;
@property(retain) id <CFScripting> clientScripter; // @synthesize clientScripter=_clientScripter;
- (void)performWithCompletion:(id /* block */)arg1;
- (id)cachePath;
- (void)scriptSavedToFilePath:(id)arg1 forScript:(id)arg2;
- (void)scriptDownloadFailedForScript:(id)arg1 error:(id)arg2;
- (void)downloadedScript:(id)arg1;
- (void)_updateScripts:(id)arg1 remaningAttempts:(long long)arg2;
- (void)_updateScriptsCompletedForScriptIdentifier:(id)arg1 success:(_Bool)arg2;
- (void)_updateScriptCacheForScriptArchiveAtPath:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateScriptCacheForScript:(id)arg1 completion:(id /* block */)arg2;
- (_Bool)_shouldRetryForError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

