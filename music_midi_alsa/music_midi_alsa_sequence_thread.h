#pragma once



namespace music
{

   namespace midi_alsa
   {


      class CLASS_DECL_VERIWELL_MULTIMEDIA_MUSIC_MIDI_ALSA sequence_thread :
         virtual public ::music::midi::sequence_thread
      {
      public:


         sequence_thread(::aura::application * papp);
         virtual ~sequence_thread();


         void install_message_handling(::message::dispatch * pinterface);

         ::music::midi::sequence * get_sequence();
         void Stop(imedia_time msEllapse);

         bool PostMidiSequenceEvent(::music::midi::sequence * pseq, ::music::midi::sequence::e_event event);

         bool PostMidiSequenceEvent(::music::midi::sequence * pseq, ::music::midi::sequence::e_event event, LPMIDIHDR lpmh);

         void PostNotifyEvent(::music::midi::player::e_notify_event eevent);

         void PrerollAndWait(double rate = 0.0);
         void PrerollAndWait(imedia_position tkStart);
         void Play(double dRate = 0.0);
         void Play(imedia_position tkStart);
         void PostGMReset();
         void PostTempoChange();
         void SendTempoChange();

         void ExecuteCommand(::music::midi::player::command * pcommand);
         void _ExecuteCommand(::music::midi::player::command * pcommand);

         virtual bool initialize_thread() override;
         virtual int32_t exit_thread() override;

         DECL_GEN_SIGNAL(OnCommand);
         DECL_GEN_SIGNAL(OnMidiSequenceEvent);
         DECL_GEN_SIGNAL(OnRun);

      };


   } // namespace midi_alsa


} // namespace music





