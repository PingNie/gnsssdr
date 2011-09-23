#ifndef ISR_H_
#define ISR_H_

struct accum {          // ���������, �������� ��� 6 ������� ����������� (�������� 6-�� ����������);
  short i_prompt;
  short q_prompt;
  short i_late;
  short q_late;
  short i_early;
  short q_early;
};

struct accum_mag {
  long early_mag;
  long prompt_mag;
  long late_mag;
};

typedef enum {
    CHANNEL_OFF         = 0,
    CHANNEL_ON          = 1,
    CHANNEL_ACQUISITION = 1,
    CHANNEL_CONFIRM     = 2,
    CHANNEL_PULL_IN     = 3,
    CHANNEL_BIT_SYNC    = 4,
    CHANNEL_LOCK        = 5
} TRACKING_ENUM;

struct tracking_channel
{
  TRACKING_ENUM       state;                    // ��������� ������;
  struct accum        accum, prev_accum, prev2_accum; // ������ � 6-�� ������������;
  struct accum_mag    accum_mean;               // ���������� 6-�� ������������ �� ����� �������������;

  long                cross, dot;               // cross � dot - ���������� ������������� �� ��������� accum � accum_prev;
  long                carrError, oldCarrError;  // ����� �������� ��������������;
  long                freqError;                // ����� ���������� ��������������;
  long                carrNco, oldCarrNco;      // ������� �������� � ������� ���������� �������, ���������� � ��������� ������. � ���������� �������� ��������.
  long                carrFreq, carrFreqBasis;  // ������� ������� ���������� ������� � ������� �������� ������� ���������� �������, ���������� � ��������� ����������� �������;

  long                codeError, oldCodeError;  // ����� �������������� �������� � ��� ���������� ��������;
  long                codeFreq, codeFreqBasis;  // ������� ������� ��������� ���������� ��� � ������� �������� ������� ���������� ���;
  long                codeNco, oldCodeNco;      // ������� �������� � �������� ������� ���������� ���, ������������ ������������ ��������. � ���������� �������� ��������.

  long                ch_time;                  //

  int                 n_freq;                   // ����� ������� ������ ������ �� �������;
  int                 i_confirm;                // ��� ������; ������� ����� ������� ��������� �������������;
  int                 n_thresh;                 // ��� ������; ������� ��� ��� �������� ����� � ��������� �������������;
  int                 codes;                    // ������� ��������� ��� ��������� � ������� ������ �� ������� �������.
                                                // ������������ � ��������� ������ ����������� ������� �������� � ��������� ������ ������ �� ������� �������.
  int                 del_freq;                 // ��������������� ����������, �������������� ��� ������� ������ ������� ������ ������ �� �������;
  char                CN0;                      // Current carrier to noise ratio;
  long                carrier_freq;             // Carrier frequency for this channel;
  long                carrier_cold_corr;        // �������� � carrier_ref ��� ������� ��������� ������, ����� ���� ���������� � ������� ������� ������� ��������.

  int                 sign_pos, prev_sign_pos;  // �������������� ������� �����: ������� � ����������.
  int                 sign_count;               // ������� ��� �������������� ������� ����� ������� ������ 19 ��!
};


extern void gpsisr (void);



#endif /* ISR_H_ */
