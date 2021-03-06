//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseControlLogic.h"

#import "VoicePrintHandlerDelegate-Protocol.h"

@class NSString, WCAccountControlData;

@interface WCAccountBaseControlLogic : WCBaseControlLogic <VoicePrintHandlerDelegate>
{
    WCAccountControlData *m_data;
    _Bool m_bDisableDataReport;
}

- (void).cxx_destruct;
- (void)addTopViewController:(id)arg1;
- (void)disableDataReport;
- (id)getArchive;
- (id)initWithData:(id)arg1;
- (void)onErrorAction:(id)arg1;
- (_Bool)onHandleError:(id)arg1;
- (void)onVoicePrintAction:(id)arg1;
- (void)openMainFrame:(_Bool)arg1 showStyle:(id)arg2;
- (_Bool)recoverFromArchive:(id)arg1;
- (void)removeTopViewController;
- (void)reportEnterView:(id)arg1;
- (void)reportExitView:(id)arg1;
- (void)reportOpenMainView:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)stopLogic;
- (void)vcBecomeFirstResponder;
- (void)vcResignFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

